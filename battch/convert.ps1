$files = Get-Item * -Include *.jpg, *png
foreach ($f in $files) {
    <# $f is the current item #>
    Start-Process -FilePath TextureConverter.exe -ArgumentList "$f -ml 3" -Wait
}
pause