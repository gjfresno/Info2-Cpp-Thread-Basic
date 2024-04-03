FROM gcc:4.9
COPY . .
RUN gcc -o thead_basico.e thead_basico.cpp -lpthread
EXPOSE 8080
CMD ["./thead_basico.e"]